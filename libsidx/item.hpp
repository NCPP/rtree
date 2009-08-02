/******************************************************************************
 * $Id$
 *
 * Project:  libsidx - A C API wrapper around libspatialindex
 * Purpose:  C++ object declarations to implement the index items.
 * Author:   Howard Butler, hobu.inc@gmail.com
 *
 ******************************************************************************
 * Copyright (c) 2009, Howard Butler
 *
 * All rights reserved.
 * 
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.

 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU Lesser General Public License 
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 ****************************************************************************/

#pragma once

class Item 
{
private:
    uint64_t m_id;
    uint8_t* m_data;
    SpatialIndex::Region* m_bounds;
    uint64_t m_length;

public:
    Item(uint64_t id);
    ~Item();

    Item(Item const& other);
    Item& operator=(Item const& other);
    
    uint64_t GetID() const { return m_id; }
    
    void SetData(const uint8_t* data, uint64_t length);
    void GetData(uint8_t** data, uint64_t* length);
    const SpatialIndex::Region* GetBounds() const;
    void SetBounds(const SpatialIndex::Region* );
};