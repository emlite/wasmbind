#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WorkerOptions
class WorkerOptions : public emlite::Val {
  explicit WorkerOptions(Handle h) noexcept;
public:
    static WorkerOptions take_ownership(Handle h) noexcept;
    explicit WorkerOptions(const emlite::Val &val) noexcept;
    WorkerOptions() noexcept;
    [[nodiscard]] WorkerOptions clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] WorkerType type() const;
    /// Setter of the `type` attribute.
    void type(const WorkerType& value);
    /// Getter of the `credentials` attribute.
    [[nodiscard]] RequestCredentials credentials() const;
    /// Setter of the `credentials` attribute.
    void credentials(const RequestCredentials& value);
};

} // namespace webbind