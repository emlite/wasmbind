#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMRectReadOnly;
class Element;


class IntersectionObserverEntry : public emlite::Val {
    explicit IntersectionObserverEntry(Handle h) noexcept;

public:
    explicit IntersectionObserverEntry(const emlite::Val &val) noexcept;
    static IntersectionObserverEntry take_ownership(Handle h) noexcept;

    IntersectionObserverEntry clone() const noexcept;
    IntersectionObserverEntry(const jsbind::Any& intersectionObserverEntryInit);
    jsbind::Any time() const;
    DOMRectReadOnly rootBounds() const;
    DOMRectReadOnly boundingClientRect() const;
    DOMRectReadOnly intersectionRect() const;
    bool isIntersecting() const;
    bool isVisible() const;
    double intersectionRatio() const;
    Element target() const;
};

