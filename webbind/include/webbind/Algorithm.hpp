#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type Algorithm
class Algorithm : public emlite::Val {
  explicit Algorithm(Handle h) noexcept;
public:
    static Algorithm take_ownership(Handle h) noexcept;
    explicit Algorithm(const emlite::Val &val) noexcept;
    Algorithm() noexcept;
    [[nodiscard]] Algorithm clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
};

} // namespace webbind