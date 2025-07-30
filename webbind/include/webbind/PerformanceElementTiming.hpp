#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class DOMRectReadOnly;
class Element;


class PerformanceElementTiming : public PerformanceEntry {
    explicit PerformanceElementTiming(Handle h) noexcept;

public:
    explicit PerformanceElementTiming(const emlite::Val &val) noexcept;
    static PerformanceElementTiming take_ownership(Handle h) noexcept;

    PerformanceElementTiming clone() const noexcept;
    jsbind::Any renderTime() const;
    jsbind::Any loadTime() const;
    DOMRectReadOnly intersectionRect() const;
    jsbind::String identifier() const;
    unsigned long naturalWidth() const;
    unsigned long naturalHeight() const;
    jsbind::String id() const;
    Element element() const;
    jsbind::String url() const;
    jsbind::Object toJSON();
    jsbind::Any paintTime() const;
    jsbind::Any presentationTime() const;
};

