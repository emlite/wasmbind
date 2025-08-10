#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DocumentPictureInPictureOptions
class DocumentPictureInPictureOptions : public emlite::Val {
  explicit DocumentPictureInPictureOptions(Handle h) noexcept;
public:
    static DocumentPictureInPictureOptions take_ownership(Handle h) noexcept;
    explicit DocumentPictureInPictureOptions(const emlite::Val &val) noexcept;
    DocumentPictureInPictureOptions() noexcept;
    [[nodiscard]] DocumentPictureInPictureOptions clone() const noexcept;
    /// Getter of the `width` attribute.
    [[nodiscard]] long long width() const;
    /// Setter of the `width` attribute.
    void width(long long value);
    /// Getter of the `height` attribute.
    [[nodiscard]] long long height() const;
    /// Setter of the `height` attribute.
    void height(long long value);
    /// Getter of the `disallowReturnToOpener` attribute.
    [[nodiscard]] bool disallowReturnToOpener() const;
    /// Setter of the `disallowReturnToOpener` attribute.
    void disallowReturnToOpener(bool value);
    /// Getter of the `preferInitialWindowPlacement` attribute.
    [[nodiscard]] bool preferInitialWindowPlacement() const;
    /// Setter of the `preferInitialWindowPlacement` attribute.
    void preferInitialWindowPlacement(bool value);
};

} // namespace webbind