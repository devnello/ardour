// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_TOGGLEACTION_H
#define _GTKMM_TOGGLEACTION_H

#include <glibmm.h>

/* $Id$ */

/* Copyright (C) 2003 The gtkmm Development Team
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

#include <gtkmm/action.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkToggleAction GtkToggleAction;
typedef struct _GtkToggleActionClass GtkToggleActionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class ToggleAction_Class; } // namespace Gtk
namespace Gtk
{


class ToggleAction : public Gtk::Action
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef ToggleAction CppObjectType;
  typedef ToggleAction_Class CppClassType;
  typedef GtkToggleAction BaseObjectType;
  typedef GtkToggleActionClass BaseClassType;

private:  friend class ToggleAction_Class;
  static CppClassType toggleaction_class_;

private:
  // noncopyable
  ToggleAction(const ToggleAction&);
  ToggleAction& operator=(const ToggleAction&);

protected:
  explicit ToggleAction(const Glib::ConstructParams& construct_params);
  explicit ToggleAction(GtkToggleAction* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~ToggleAction();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkToggleAction*       gobj()       { return reinterpret_cast<GtkToggleAction*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkToggleAction* gobj() const { return reinterpret_cast<GtkToggleAction*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkToggleAction* gobj_copy();

private:


protected:
  ToggleAction();
   explicit ToggleAction(const Glib::ustring& name, const StockID& stock_id, const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip = Glib::ustring(), bool is_active = false);

public:
  
  static Glib::RefPtr<ToggleAction> create();

   static Glib::RefPtr<ToggleAction> create(const Glib::ustring& name, const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip =  Glib::ustring(), bool is_active = false);
   static Glib::RefPtr<ToggleAction> create(const Glib::ustring& name, const Gtk::StockID& stock_id, const Glib::ustring& label =  Glib::ustring(), const Glib::ustring& tooltip =  Glib::ustring(), bool is_active = false);

  
  /** Emits the "toggled" signal on the toggle action.
   * 
   * Since: 2.4
   */
  void toggled();
  
  /** Sets the checked state on the toggle action.
   * 
   * Since: 2.4
   * @param is_active Whether the action should be checked or not.
   */
  void set_active(bool is_active = true);
  
  /** Returns the checked state of the toggle action.
   * @return The checked state of the toggle action
   * 
   * Since: 2.4.
   */
  bool get_active() const;
  
  /** Sets whether the action should have proxies like a radio action.
   * 
   * Since: 2.4
   * @param draw_as_radio Whether the action should have proxies like a radio 
   * action.
   */
  void set_draw_as_radio(bool draw_as_radio = true);
  
  /** Returns whether the action should have proxies like a radio action.
   * @return Whether the action should have proxies like a radio action.
   * 
   * Since: 2.4.
   */
  bool get_draw_as_radio() const;

  
  Glib::SignalProxy0< void > signal_toggled();


  /** Whether the proxies for this action look like radio action proxies.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_draw_as_radio() ;

/** Whether the proxies for this action look like radio action proxies.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_draw_as_radio() const;
          

public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_toggled();


};

} // namespace Gtk


namespace Glib
{
  /** @relates Gtk::ToggleAction
   * @param object The C instance
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   */
  Glib::RefPtr<Gtk::ToggleAction> wrap(GtkToggleAction* object, bool take_copy = false);
}


#endif /* _GTKMM_TOGGLEACTION_H */

