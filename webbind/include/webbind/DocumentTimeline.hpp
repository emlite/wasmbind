#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AnimationTimeline.hpp"
#include "enums.hpp"


class DocumentTimeline : public AnimationTimeline {
    explicit DocumentTimeline(Handle h) noexcept;

public:
    explicit DocumentTimeline(const emlite::Val &val) noexcept;
    static DocumentTimeline take_ownership(Handle h) noexcept;

    DocumentTimeline clone() const noexcept;
    DocumentTimeline(const jsbind::Any& options);
};

