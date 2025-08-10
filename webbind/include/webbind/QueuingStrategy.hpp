#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type QueuingStrategy
class QueuingStrategy : public emlite::Val {
  explicit QueuingStrategy(Handle h) noexcept;
public:
    static QueuingStrategy take_ownership(Handle h) noexcept;
    explicit QueuingStrategy(const emlite::Val &val) noexcept;
    QueuingStrategy() noexcept;
    [[nodiscard]] QueuingStrategy clone() const noexcept;
    /// Getter of the `highWaterMark` attribute.
    [[nodiscard]] double highWaterMark() const;
    /// Setter of the `highWaterMark` attribute.
    void highWaterMark(double value);
    /// Getter of the `size` attribute.
    [[nodiscard]] jsbind::Function size() const;
    /// Setter of the `size` attribute.
    void size(const jsbind::Function& value);
};

} // namespace webbind