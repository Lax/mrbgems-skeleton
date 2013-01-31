#include <mruby.h>
#include <stdio.h>

static mrb_value
mrb_c_method(mrb_state *mrb, mrb_value self)
{
  puts("A C Extension");
  return self;
}

void
mrb_mrbgems_skeleton_gem_init(mrb_state* mrb) {
  struct RClass *class_cextension = mrb_define_module(mrb, "CRubyExtension");
  mrb_define_class_method(mrb, class_cextension, "c_method", mrb_c_method, ARGS_NONE());
}

void
mrb_mrbgems_skeleton_gem_final(mrb_state* mrb) {
  // finalizer
}
