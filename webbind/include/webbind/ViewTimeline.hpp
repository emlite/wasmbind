#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ScrollTimeline.hpp"
#include "enums.hpp"

class Element;
class CSSNumericValue;


class ViewTimeline : public ScrollTimeline {
    explicit ViewTimeline(Handle h) noexcept;

public:
    explicit ViewTimeline(const emlite::Val &val) noexcept;
    static ViewTimeline take_ownership(Handle h) noexcept;

    ViewTimeline clone() const noexcept;
    ViewTimeline(const jsbind::Any& options);
    Element subject() const;
    CSSNumericValue startOffset() const;
    CSSNumericValue endOffset() const;
};

