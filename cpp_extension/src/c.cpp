#include <mruby.h>
#include <mruby/error.h>

static mrb_value
mrb_raise_cpp(mrb_state *mrb, mrb_value self)
{
  mrb_sys_fail(mrb, "raise_cpp");
}

MRB_BEGIN_DECL
void
mrb_cpp_extension_gem_init(mrb_state* mrb)
{
  mrb_define_method(mrb, mrb->object_class, "cpp_raise", mrb_raise_cpp, MRB_ARGS_NONE());
}

void mrb_cpp_extension_gem_final(mrb_state* mrb) {}
MRB_END_DECL