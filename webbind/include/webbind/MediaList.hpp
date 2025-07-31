#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The MediaList class.
/// [`MediaList`](https://developer.mozilla.org/en-US/docs/Web/API/MediaList)
class MediaList : public emlite::Val {
    explicit MediaList(Handle h) noexcept;

public:
    explicit MediaList(const emlite::Val &val) noexcept;
    static MediaList take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaList clone() const noexcept;
    /// Getter of the `mediaText` attribute.
    /// [`MediaList.mediaText`](https://developer.mozilla.org/en-US/docs/Web/API/MediaList/mediaText)
    [[nodiscard]] jsbind::String mediaText() const;
    /// Setter of the `mediaText` attribute.
    /// [`MediaList.mediaText`](https://developer.mozilla.org/en-US/docs/Web/API/MediaList/mediaText)
    void mediaText(const jsbind::String& value);
    /// Getter of the `length` attribute.
    /// [`MediaList.length`](https://developer.mozilla.org/en-US/docs/Web/API/MediaList/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`MediaList.item`](https://developer.mozilla.org/en-US/docs/Web/API/MediaList/item)
    jsbind::String item(unsigned long index);
    /// The appendMedium method.
    /// [`MediaList.appendMedium`](https://developer.mozilla.org/en-US/docs/Web/API/MediaList/appendMedium)
    jsbind::Undefined appendMedium(const jsbind::String& medium);
    /// The deleteMedium method.
    /// [`MediaList.deleteMedium`](https://developer.mozilla.org/en-US/docs/Web/API/MediaList/deleteMedium)
    jsbind::Undefined deleteMedium(const jsbind::String& medium);
};

