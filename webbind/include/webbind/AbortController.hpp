#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AbortSignal;


class AbortController : public emlite::Val {
    explicit AbortController(Handle h) noexcept;

public:
    explicit AbortController(const emlite::Val &val) noexcept;
    static AbortController take_ownership(Handle h) noexcept;

    AbortController clone() const noexcept;
    AbortController();
    AbortSignal signal() const;
    jsbind::Undefined abort();
    jsbind::Undefined abort(const jsbind::Any& reason);
};

