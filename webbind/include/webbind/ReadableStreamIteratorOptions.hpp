#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReadableStreamIteratorOptions
class ReadableStreamIteratorOptions : public emlite::Val {
  explicit ReadableStreamIteratorOptions(Handle h) noexcept;
public:
    static ReadableStreamIteratorOptions take_ownership(Handle h) noexcept;
    explicit ReadableStreamIteratorOptions(const emlite::Val &val) noexcept;
    ReadableStreamIteratorOptions() noexcept;
    [[nodiscard]] ReadableStreamIteratorOptions clone() const noexcept;
    /// Getter of the `preventCancel` attribute.
    [[nodiscard]] bool preventCancel() const;
    /// Setter of the `preventCancel` attribute.
    void preventCancel(bool value);
};

} // namespace webbind