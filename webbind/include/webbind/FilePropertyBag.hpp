#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BlobPropertyBag.hpp"

namespace webbind {

/// Dictionary type FilePropertyBag
/// [`FilePropertyBag`](https://developer.mozilla.org/en-US/docs/Web/API/FilePropertyBag)
class FilePropertyBag : public BlobPropertyBag {
  explicit FilePropertyBag(Handle h) noexcept;
public:
    static FilePropertyBag take_ownership(Handle h) noexcept;
    explicit FilePropertyBag(const emlite::Val &val) noexcept;
    FilePropertyBag() noexcept;
    [[nodiscard]] FilePropertyBag clone() const noexcept;
    [[nodiscard]] long long lastModified() const;
    void lastModified(long long value);
};

} // namespace webbind