#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Element;
class DOMRectReadOnly;
class ResizeObserverSize;


class ResizeObserverEntry : public emlite::Val {
    explicit ResizeObserverEntry(Handle h) noexcept;

public:
    explicit ResizeObserverEntry(const emlite::Val &val) noexcept;
    static ResizeObserverEntry take_ownership(Handle h) noexcept;

    ResizeObserverEntry clone() const noexcept;
    Element target() const;
    DOMRectReadOnly contentRect() const;
    jsbind::TypedArray<ResizeObserverSize> borderBoxSize() const;
    jsbind::TypedArray<ResizeObserverSize> contentBoxSize() const;
    jsbind::TypedArray<ResizeObserverSize> devicePixelContentBoxSize() const;
};

