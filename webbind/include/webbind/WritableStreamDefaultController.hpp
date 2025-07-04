#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AbortSignal;


class WritableStreamDefaultController : public emlite::Val {
    explicit WritableStreamDefaultController(Handle h) noexcept;

public:
    explicit WritableStreamDefaultController(const emlite::Val &val) noexcept;
    static WritableStreamDefaultController take_ownership(Handle h) noexcept;

    WritableStreamDefaultController clone() const noexcept;
    AbortSignal signal() const;
    jsbind::Undefined error(const jsbind::Any& e);
};

