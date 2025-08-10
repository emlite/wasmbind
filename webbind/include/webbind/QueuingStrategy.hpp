#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type QueuingStrategy
/// [`QueuingStrategy`](https://developer.mozilla.org/en-US/docs/Web/API/QueuingStrategy)
class QueuingStrategy : public emlite::Val {
  explicit QueuingStrategy(Handle h) noexcept;
public:
    static QueuingStrategy take_ownership(Handle h) noexcept;
    explicit QueuingStrategy(const emlite::Val &val) noexcept;
    QueuingStrategy() noexcept;
    [[nodiscard]] QueuingStrategy clone() const noexcept;
    [[nodiscard]] double highWaterMark() const;
    void highWaterMark(double value);
    [[nodiscard]] jsbind::Function size() const;
    void size(const jsbind::Function& value);
};

} // namespace webbind