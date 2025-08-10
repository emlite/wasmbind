#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WorkerOptions
/// [`WorkerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerOptions)
class WorkerOptions : public emlite::Val {
  explicit WorkerOptions(Handle h) noexcept;
public:
    static WorkerOptions take_ownership(Handle h) noexcept;
    explicit WorkerOptions(const emlite::Val &val) noexcept;
    WorkerOptions() noexcept;
    [[nodiscard]] WorkerOptions clone() const noexcept;
    [[nodiscard]] WorkerType type() const;
    void type(const WorkerType& value);
    [[nodiscard]] RequestCredentials credentials() const;
    void credentials(const RequestCredentials& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
};

} // namespace webbind