#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AnimationTimeline.hpp"
#include "enums.hpp"

class Element;


class PointerTimeline : public AnimationTimeline {
    explicit PointerTimeline(Handle h) noexcept;

public:
    explicit PointerTimeline(const emlite::Val &val) noexcept;
    static PointerTimeline take_ownership(Handle h) noexcept;

    PointerTimeline clone() const noexcept;
    PointerTimeline();
    PointerTimeline(const jsbind::Any& options);
    Element source() const;
    PointerAxis axis() const;
};

