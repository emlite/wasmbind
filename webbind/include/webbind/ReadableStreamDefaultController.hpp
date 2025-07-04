#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ReadableStreamDefaultController : public emlite::Val {
    explicit ReadableStreamDefaultController(Handle h) noexcept;

public:
    explicit ReadableStreamDefaultController(const emlite::Val &val) noexcept;
    static ReadableStreamDefaultController take_ownership(Handle h) noexcept;

    ReadableStreamDefaultController clone() const noexcept;
    double desiredSize() const;
    jsbind::Undefined close();
    jsbind::Undefined enqueue(const jsbind::Any& chunk);
    jsbind::Undefined error(const jsbind::Any& e);
};

