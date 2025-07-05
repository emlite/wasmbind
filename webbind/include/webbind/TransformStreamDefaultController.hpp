#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class TransformStreamDefaultController : public emlite::Val {
    explicit TransformStreamDefaultController(Handle h) noexcept;

public:
    explicit TransformStreamDefaultController(const emlite::Val &val) noexcept;
    static TransformStreamDefaultController take_ownership(Handle h) noexcept;

    TransformStreamDefaultController clone() const noexcept;
    double desiredSize() const;
    jsbind::Undefined enqueue();
    jsbind::Undefined enqueue(const jsbind::Any& chunk);
    jsbind::Undefined error();
    jsbind::Undefined error(const jsbind::Any& reason);
    jsbind::Undefined terminate();
};

