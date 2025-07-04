#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AnimationTimeline.hpp"
#include "enums.hpp"

class Element;


class ScrollTimeline : public AnimationTimeline {
    explicit ScrollTimeline(Handle h) noexcept;

public:
    explicit ScrollTimeline(const emlite::Val &val) noexcept;
    static ScrollTimeline take_ownership(Handle h) noexcept;

    ScrollTimeline clone() const noexcept;
    ScrollTimeline(const jsbind::Any& options);
    Element source() const;
    ScrollAxis axis() const;
};

