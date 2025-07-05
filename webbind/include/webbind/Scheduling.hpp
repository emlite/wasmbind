#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class IsInputPendingOptions;


class IsInputPendingOptions : public emlite::Val {
  explicit IsInputPendingOptions(Handle h) noexcept;
public:
    static IsInputPendingOptions take_ownership(Handle h) noexcept;
    explicit IsInputPendingOptions(const emlite::Val &val) noexcept;
    IsInputPendingOptions() noexcept;
    IsInputPendingOptions clone() const noexcept;
    bool includeContinuous() const;
    void includeContinuous(bool value);
};

class Scheduling : public emlite::Val {
    explicit Scheduling(Handle h) noexcept;

public:
    explicit Scheduling(const emlite::Val &val) noexcept;
    static Scheduling take_ownership(Handle h) noexcept;

    Scheduling clone() const noexcept;
    bool isInputPending();
    bool isInputPending(const IsInputPendingOptions& isInputPendingOptions);
};

