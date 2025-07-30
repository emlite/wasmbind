#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class FencedFrameConfig;
class DOMTokenList;


class HTMLFencedFrameElement : public HTMLElement {
    explicit HTMLFencedFrameElement(Handle h) noexcept;

public:
    explicit HTMLFencedFrameElement(const emlite::Val &val) noexcept;
    static HTMLFencedFrameElement take_ownership(Handle h) noexcept;

    HTMLFencedFrameElement clone() const noexcept;
    HTMLFencedFrameElement();
    FencedFrameConfig config() const;
    void config(const FencedFrameConfig& value);
    jsbind::String width() const;
    void width(const jsbind::String& value);
    jsbind::String height() const;
    void height(const jsbind::String& value);
    DOMTokenList sandbox() const;
    jsbind::String allow() const;
    void allow(const jsbind::String& value);
};

