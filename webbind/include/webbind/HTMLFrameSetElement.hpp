#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLFrameSetElement : public HTMLElement {
    explicit HTMLFrameSetElement(Handle h) noexcept;

public:
    explicit HTMLFrameSetElement(const emlite::Val &val) noexcept;
    static HTMLFrameSetElement take_ownership(Handle h) noexcept;

    HTMLFrameSetElement clone() const noexcept;
    HTMLFrameSetElement();
    jsbind::String cols() const;
    void cols(const jsbind::String& value);
    jsbind::String rows() const;
    void rows(const jsbind::String& value);
    jsbind::Any onportalactivate() const;
    void onportalactivate(const jsbind::Any& value);
};

