/*
 * Copyright (c) 2023, Kenneth Myhra <kennethmyhra@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/DOM/Event.h>
#include <LibWeb/XHR/FormData.h>

namespace Web::HTML {

struct FormDataEventInit : public DOM::EventInit {
    GC::Ptr<XHR::FormData> form_data {};
};

class FormDataEvent final : public DOM::Event {
    WEB_PLATFORM_OBJECT(FormDataEvent, DOM::Event);
    GC_DECLARE_ALLOCATOR(FormDataEvent);

public:
    static WebIDL::ExceptionOr<GC::Ref<FormDataEvent>> construct_impl(JS::Realm&, FlyString const& event_name, FormDataEventInit const& event_init);

    virtual ~FormDataEvent() override;

    GC::Ptr<XHR::FormData> form_data() const { return m_form_data; }

private:
    FormDataEvent(JS::Realm&, FlyString const& event_name, FormDataEventInit const& event_init);

    void initialize(JS::Realm&) override;

    virtual void visit_edges(Cell::Visitor&) override;

    GC::Ptr<XHR::FormData> m_form_data;
};

}
