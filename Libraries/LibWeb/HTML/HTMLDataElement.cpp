/*
 * Copyright (c) 2020, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/Bindings/HTMLDataElementPrototype.h>
#include <LibWeb/Bindings/Intrinsics.h>
#include <LibWeb/HTML/HTMLDataElement.h>

namespace Web::HTML {

GC_DEFINE_ALLOCATOR(HTMLDataElement);

HTMLDataElement::HTMLDataElement(DOM::Document& document, DOM::QualifiedName qualified_name)
    : HTMLElement(document, move(qualified_name))
{
}

HTMLDataElement::~HTMLDataElement() = default;

void HTMLDataElement::initialize(JS::Realm& realm)
{
    WEB_SET_PROTOTYPE_FOR_INTERFACE(HTMLDataElement);
    Base::initialize(realm);
}

}
