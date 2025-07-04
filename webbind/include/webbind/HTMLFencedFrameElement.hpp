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
    jsbind::DOMString width() const;
    void width(const jsbind::DOMString& value);
    jsbind::DOMString height() const;
    void height(const jsbind::DOMString& value);
    DOMTokenList sandbox() const;
    jsbind::DOMString allow() const;
    void allow(const jsbind::DOMString& value);
};

