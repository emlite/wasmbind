#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReadableStreamGetReaderOptions
class ReadableStreamGetReaderOptions : public emlite::Val {
  explicit ReadableStreamGetReaderOptions(Handle h) noexcept;
public:
    static ReadableStreamGetReaderOptions take_ownership(Handle h) noexcept;
    explicit ReadableStreamGetReaderOptions(const emlite::Val &val) noexcept;
    ReadableStreamGetReaderOptions() noexcept;
    [[nodiscard]] ReadableStreamGetReaderOptions clone() const noexcept;
    /// Getter of the `mode` attribute.
    [[nodiscard]] ReadableStreamReaderMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const ReadableStreamReaderMode& value);
};

} // namespace webbind