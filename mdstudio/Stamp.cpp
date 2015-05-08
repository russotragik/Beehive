///////////////////////////////////////////////////////
// MD Studio: A complete SEGA Mega Drive content tool
//
// (c) 2015 Matt Phillips, Big Evil Corporation
///////////////////////////////////////////////////////

#include "Stamp.h"

#include <core/cryptography/Hash.h>

Stamp::Stamp(int width, int height)
{
	m_width = width;
	m_height = height;
	m_nameHash = 0;

	int size = width * height;
	m_tiles.resize(size);

	for(int i = 0; i < size; i++)
	{
		m_tiles[i].m_id = InvalidTileId;
	}
}

int Stamp::GetWidth() const
{
	return m_width;
}

int Stamp::GetHeight() const
{
	return m_height;
}

void Stamp::SetTile(int x, int y, TileId tile)
{
	int tileIdx = (y * m_width) + x;
	ion::debug::Assert(tileIdx < (m_width * m_height), "Out of range");
	m_tiles[tileIdx].m_id = tile;
	m_tiles[tileIdx].m_flags = 0;
}

TileId Stamp::GetTile(int x, int y) const
{
	int tileIdx = (y * m_width) + x;
	ion::debug::Assert(tileIdx < (m_width * m_height), "Out of range");
	return m_tiles[tileIdx].m_id;
}

void Stamp::SetTileFlags(int x, int y, u32 flags)
{
	int tileIdx = (y * m_width) + x;
	ion::debug::Assert(tileIdx < (m_width * m_height), "Out of range");
	m_tiles[tileIdx].m_flags = flags;
}

u32 Stamp::GetTileFlags(int x, int y) const
{
	int tileIdx = (y * m_width) + x;
	ion::debug::Assert(tileIdx < (m_width * m_height), "Out of range");
	return m_tiles[tileIdx].m_flags;
}

void Stamp::SetName(const std::string& name)
{
	m_name = name;
	m_nameHash = ion::Hash(name.c_str());
}

const std::string& Stamp::GetName() const
{
	return m_name;
}

u32 Stamp::GetNameHash() const
{
	return m_nameHash;
}

void Stamp::Serialise(ion::io::Archive& archive)
{
	archive.Serialise(m_width);
	archive.Serialise(m_height);
	archive.Serialise(m_name);
	archive.Serialise(m_nameHash);
	archive.Serialise(m_tiles);
}