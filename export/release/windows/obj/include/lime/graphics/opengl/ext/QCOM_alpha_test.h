// Generated by Haxe 4.2.2
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test
#define INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_399cf2cdee05251f_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_alpha_test)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES QCOM_alpha_test_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QCOM_alpha_test_obj OBJ_;
		QCOM_alpha_test_obj();

	public:
		enum { _hx_ClassId = 0x11be7910 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_alpha_test")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.QCOM_alpha_test"); }

		inline static ::hx::ObjectPtr< QCOM_alpha_test_obj > __new() {
			::hx::ObjectPtr< QCOM_alpha_test_obj > __this = new QCOM_alpha_test_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< QCOM_alpha_test_obj > __alloc(::hx::Ctx *_hx_ctx) {
			QCOM_alpha_test_obj *__this = (QCOM_alpha_test_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QCOM_alpha_test_obj), false, "lime.graphics.opengl.ext.QCOM_alpha_test"));
			*(void **)__this = QCOM_alpha_test_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_399cf2cdee05251f_4_new)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::QCOM_alpha_test)(__this) )->ALPHA_TEST_REF_QCOM = 3010;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::QCOM_alpha_test)(__this) )->ALPHA_TEST_FUNC_QCOM = 3009;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::QCOM_alpha_test)(__this) )->ALPHA_TEST_QCOM = 3008;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QCOM_alpha_test_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QCOM_alpha_test",c2,a6,01,c4); }

		int ALPHA_TEST_QCOM;
		int ALPHA_TEST_FUNC_QCOM;
		int ALPHA_TEST_REF_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test */ 