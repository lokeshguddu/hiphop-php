/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_ReflectionParameter_h178d2c14__
#define __GENERATED_cls_ReflectionParameter_h178d2c14__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 46 */
FORWARD_DECLARE_CLASS(ReflectionParameter);
extern const ObjectStaticCallbacks cw_ReflectionParameter;
class c_ReflectionParameter : public ExtObjectData {
  public:

  // Properties
  Variant m_info;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(ReflectionParameter, ReflectionParameter, ObjectData)
  static const ClassPropTable os_prop_table;
  c_ReflectionParameter() : m_info(Variant::nullInit) {}
  public: void t___construct(Variant v_func, Variant v_param);
  public: c_ReflectionParameter *create(CVarRef v_func, CVarRef v_param);
  public: String t___tostring();
  public: static Variant t_export(CVarRef v_func, CVarRef v_param, CVarRef v_ret);
  public: Variant t_getname();
  public: Variant t_ispassedbyreference();
  public: Variant t_getdeclaringclass();
  public: Variant t_getclass();
  public: bool t_isarray();
  public: Variant t_allowsnull();
  public: bool t_isoptional();
  public: bool t_isdefaultvalueavailable();
  public: Variant t_getdefaultvalue();
  public: Variant t_getposition();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(getname);
  DECLARE_METHOD_INVOKE_HELPERS(ispassedbyreference);
  DECLARE_METHOD_INVOKE_HELPERS(getdeclaringclass);
  DECLARE_METHOD_INVOKE_HELPERS(getclass);
  DECLARE_METHOD_INVOKE_HELPERS(isarray);
  DECLARE_METHOD_INVOKE_HELPERS(allowsnull);
  DECLARE_METHOD_INVOKE_HELPERS(isoptional);
  DECLARE_METHOD_INVOKE_HELPERS(isdefaultvalueavailable);
  DECLARE_METHOD_INVOKE_HELPERS(getdefaultvalue);
  DECLARE_METHOD_INVOKE_HELPERS(getposition);
};
ObjectData *coo_ReflectionParameter() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionParameter_h178d2c14__
