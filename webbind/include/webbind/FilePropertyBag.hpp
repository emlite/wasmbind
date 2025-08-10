#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BlobPropertyBag.hpp"

namespace webbind {

/// Dictionary type FilePropertyBag
class FilePropertyBag : public BlobPropertyBag {
  explicit FilePropertyBag(Handle h) noexcept;
public:
    static FilePropertyBag take_ownership(Handle h) noexcept;
    explicit FilePropertyBag(const emlite::Val &val) noexcept;
    FilePropertyBag() noexcept;
    [[nodiscard]] FilePropertyBag clone() const noexcept;
    /// Getter of the `lastModified` attribute.
    [[nodiscard]] long long lastModified() const;
    /// Setter of the `lastModified` attribute.
    void lastModified(long long value);
};

} // namespace webbind