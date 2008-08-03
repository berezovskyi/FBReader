/*
 * Copyright (C) 2004-2008 Geometer Plus <contact@geometerplus.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef __RECENTBOOKSVIEW_H__
#define __RECENTBOOKSVIEW_H__

#include <map>

#include "FBView.h"
#include "../description/BookDescription.h"

class PlainTextModel;
class Paragraph;

class RecentBooksView : public FBView {

public:
	RecentBooksView(FBReader &reader, shared_ptr<ZLPaintContext> context);
	~RecentBooksView();
	const std::string &caption() const;

	void rebuild();
	bool _onStylusPress(int x, int y);

	void paint();
};

#endif /* __RECENTBOOKSVIEW_H__ */
