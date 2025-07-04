#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AbortSignal;


class Subscriber : public emlite::Val {
    explicit Subscriber(Handle h) noexcept;

public:
    explicit Subscriber(const emlite::Val &val) noexcept;
    static Subscriber take_ownership(Handle h) noexcept;

    Subscriber clone() const noexcept;
    jsbind::Undefined next(const jsbind::Any& value);
    jsbind::Undefined error(const jsbind::Any& error);
    jsbind::Undefined complete();
    jsbind::Undefined addTeardown(const jsbind::Any& teardown);
    bool active() const;
    AbortSignal signal() const;
};

