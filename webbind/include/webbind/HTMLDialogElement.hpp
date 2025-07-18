#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLDialogElement : public HTMLElement {
    explicit HTMLDialogElement(Handle h) noexcept;

public:
    explicit HTMLDialogElement(const emlite::Val &val) noexcept;
    static HTMLDialogElement take_ownership(Handle h) noexcept;

    HTMLDialogElement clone() const noexcept;
    HTMLDialogElement();
    bool open() const;
    void open(bool value);
    jsbind::DOMString returnValue() const;
    void returnValue(const jsbind::DOMString& value);
    jsbind::DOMString closedBy() const;
    void closedBy(const jsbind::DOMString& value);
    jsbind::Undefined show();
    jsbind::Undefined showModal();
    jsbind::Undefined close();
    jsbind::Undefined close(const jsbind::DOMString& returnValue);
    jsbind::Undefined requestClose();
    jsbind::Undefined requestClose(const jsbind::DOMString& returnValue);
};

