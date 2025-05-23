/*
 * Copyright (c) 2024, Jelle Raaijmakers <jelle@ladybird.org>
 * Copyright (c) 2024, Luke Wilde <luke@ladybird.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibJS/Runtime/Realm.h>
#include <LibWeb/Bindings/Intrinsics.h>
#include <LibWeb/Bindings/WebGLRenderbufferPrototype.h>
#include <LibWeb/WebGL/WebGLRenderbuffer.h>

namespace Web::WebGL {

GC_DEFINE_ALLOCATOR(WebGLRenderbuffer);

GC::Ref<WebGLRenderbuffer> WebGLRenderbuffer::create(JS::Realm& realm, WebGLRenderingContextBase& context, GLuint handle)
{
    return realm.create<WebGLRenderbuffer>(realm, context, handle);
}

WebGLRenderbuffer::WebGLRenderbuffer(JS::Realm& realm, WebGLRenderingContextBase& context, GLuint handle)
    : WebGLObject(realm, context, handle)
{
}

WebGLRenderbuffer::~WebGLRenderbuffer() = default;

void WebGLRenderbuffer::initialize(JS::Realm& realm)
{
    WEB_SET_PROTOTYPE_FOR_INTERFACE(WebGLRenderbuffer);
    Base::initialize(realm);
}

}
