#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DocumentPictureInPictureOptions
/// [`DocumentPictureInPictureOptions`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPictureOptions)
class DocumentPictureInPictureOptions : public emlite::Val {
  explicit DocumentPictureInPictureOptions(Handle h) noexcept;
public:
    static DocumentPictureInPictureOptions take_ownership(Handle h) noexcept;
    explicit DocumentPictureInPictureOptions(const emlite::Val &val) noexcept;
    DocumentPictureInPictureOptions() noexcept;
    [[nodiscard]] DocumentPictureInPictureOptions clone() const noexcept;
    [[nodiscard]] long long width() const;
    void width(long long value);
    [[nodiscard]] long long height() const;
    void height(long long value);
    [[nodiscard]] bool disallowReturnToOpener() const;
    void disallowReturnToOpener(bool value);
    [[nodiscard]] bool preferInitialWindowPlacement() const;
    void preferInitialWindowPlacement(bool value);
};

} // namespace webbind