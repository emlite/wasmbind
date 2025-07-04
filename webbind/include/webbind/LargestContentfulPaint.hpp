#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class Element;


class LargestContentfulPaint : public PerformanceEntry {
    explicit LargestContentfulPaint(Handle h) noexcept;

public:
    explicit LargestContentfulPaint(const emlite::Val &val) noexcept;
    static LargestContentfulPaint take_ownership(Handle h) noexcept;

    LargestContentfulPaint clone() const noexcept;
    jsbind::Any loadTime() const;
    unsigned long size() const;
    jsbind::DOMString id() const;
    jsbind::DOMString url() const;
    Element element() const;
    jsbind::Object toJSON();
    jsbind::Any paintTime() const;
    jsbind::Any presentationTime() const;
};

