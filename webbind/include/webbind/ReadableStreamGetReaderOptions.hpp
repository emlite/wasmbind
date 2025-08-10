#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReadableStreamGetReaderOptions
/// [`ReadableStreamGetReaderOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamGetReaderOptions)
class ReadableStreamGetReaderOptions : public emlite::Val {
  explicit ReadableStreamGetReaderOptions(Handle h) noexcept;
public:
    static ReadableStreamGetReaderOptions take_ownership(Handle h) noexcept;
    explicit ReadableStreamGetReaderOptions(const emlite::Val &val) noexcept;
    ReadableStreamGetReaderOptions() noexcept;
    [[nodiscard]] ReadableStreamGetReaderOptions clone() const noexcept;
    [[nodiscard]] ReadableStreamReaderMode mode() const;
    void mode(const ReadableStreamReaderMode& value);
};

} // namespace webbind