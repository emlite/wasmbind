#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReadableStreamBYOBReaderReadOptions
class ReadableStreamBYOBReaderReadOptions : public emlite::Val {
  explicit ReadableStreamBYOBReaderReadOptions(Handle h) noexcept;
public:
    static ReadableStreamBYOBReaderReadOptions take_ownership(Handle h) noexcept;
    explicit ReadableStreamBYOBReaderReadOptions(const emlite::Val &val) noexcept;
    ReadableStreamBYOBReaderReadOptions() noexcept;
    [[nodiscard]] ReadableStreamBYOBReaderReadOptions clone() const noexcept;
    /// Getter of the `min` attribute.
    [[nodiscard]] long long min() const;
    /// Setter of the `min` attribute.
    void min(long long value);
};

} // namespace webbind