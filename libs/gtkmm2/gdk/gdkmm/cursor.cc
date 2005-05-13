// Generated by gtkmmproc -- DO NOT MODIFY!

#include <gdkmm/cursor.h>
#include <gdkmm/private/cursor_p.h>

#include <gdk/gdkenumtypes.h>
// -*- c++ -*-
/* $Id$ */

/*
 *
 * Copyright 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gdk/gdkcursor.h>

namespace Gdk
{

Cursor::Cursor(CursorType cursor_type)
{
  gobject_ = gdk_cursor_new((GdkCursorType)cursor_type);
}

Cursor::Cursor(const Glib::RefPtr<Pixmap>& source, const Glib::RefPtr<Pixmap>& mask,
				       const Color& fg, const Color& bg,
				       int x, int y)
{
  gobject_ = gdk_cursor_new_from_pixmap(source->gobj(), mask->gobj(), 
                                        const_cast<GdkColor*>(fg.gobj()),
				        const_cast<GdkColor*>(bg.gobj()),
                                        x, y);
}

Cursor::Cursor(const Glib::RefPtr<Display>& display, CursorType cursor_type)
{
  gobject_ = gdk_cursor_new_for_display(display->gobj(), (GdkCursorType)cursor_type);
}

Cursor::Cursor(const Glib::RefPtr<Display>& display, const Glib::RefPtr<Pixbuf>& pixbuf, int x, int y)
{
  gobject_ = gdk_cursor_new_from_pixbuf(display->gobj(), pixbuf->gobj(), x, y);
}          

} //namespace Gdk


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gdk::CursorType>::value_type()
{
  return gdk_cursor_type_get_type();
}


namespace Glib
{

Gdk::Cursor wrap(GdkCursor* object, bool take_copy)
{
  return Gdk::Cursor(object, take_copy);
}

} // namespace Glib


namespace Gdk
{


// static
GType Cursor::get_type()
{
  return gdk_cursor_get_type();
}

Cursor::Cursor()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

Cursor::Cursor(const Cursor& other)
:
  gobject_ ((other.gobject_) ? gdk_cursor_ref(other.gobject_) : 0)
{}

Cursor::Cursor(GdkCursor* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gdk_cursor_ref(gobject) : gobject)
{}

Cursor& Cursor::operator=(const Cursor& other)
{
  Cursor temp (other);
  swap(temp);
  return *this;
}

Cursor::~Cursor()
{
  if(gobject_)
    gdk_cursor_unref(gobject_);
}

void Cursor::swap(Cursor& other)
{
  GdkCursor *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

GdkCursor* Cursor::gobj_copy() const
{
  return gdk_cursor_ref(gobject_);
}


Glib::RefPtr<Display> Cursor::get_display()
{

  Glib::RefPtr<Display> retvalue = Glib::wrap(gdk_cursor_get_display(gobj()));

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Display> Cursor::get_display() const
{

  Glib::RefPtr<const Display> retvalue = Glib::wrap(gdk_cursor_get_display(const_cast<GdkCursor*>(gobj())));

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}


} // namespace Gdk


