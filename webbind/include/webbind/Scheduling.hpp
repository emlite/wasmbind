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
    [[nodiscard]] IsInputPendingOptions clone() const noexcept;
    [[nodiscard]] bool includeContinuous() const;
    void includeContinuous(bool value);
};

/// The Scheduling class.
/// [`Scheduling`](https://developer.mozilla.org/en-US/docs/Web/API/Scheduling)
class Scheduling : public emlite::Val {
    explicit Scheduling(Handle h) noexcept;

public:
    explicit Scheduling(const emlite::Val &val) noexcept;
    static Scheduling take_ownership(Handle h) noexcept;

    [[nodiscard]] Scheduling clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The isInputPending method.
    /// [`Scheduling.isInputPending`](https://developer.mozilla.org/en-US/docs/Web/API/Scheduling/isInputPending)
    bool isInputPending();
    /// The isInputPending method.
    /// [`Scheduling.isInputPending`](https://developer.mozilla.org/en-US/docs/Web/API/Scheduling/isInputPending)
    bool isInputPending(const IsInputPendingOptions& isInputPendingOptions);
};

