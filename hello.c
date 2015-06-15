#include <stdio.h>
#include <ruby.h>

VALUE cHello;

VALUE hello_say(VALUE self) {
	puts("hello.");
	return self;
}

void Init_hello() {
	cHello = rb_define_class("Hello", rb_cObject);
	rb_define_method(cHello, "say", RUBY_METHOD_FUNC(hello_say), 0);
}


