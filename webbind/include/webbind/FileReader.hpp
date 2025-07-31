#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class Blob;
class DOMException;


/// The FileReader class.
/// [`FileReader`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader)
class FileReader : public EventTarget {
    explicit FileReader(Handle h) noexcept;

public:
    explicit FileReader(const emlite::Val &val) noexcept;
    static FileReader take_ownership(Handle h) noexcept;

    [[nodiscard]] FileReader clone() const noexcept;
    /// The `new FileReader(..)` constructor, creating a new FileReader instance
    FileReader();
    /// The readAsArrayBuffer method.
    /// [`FileReader.readAsArrayBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsArrayBuffer)
    jsbind::Undefined readAsArrayBuffer(const Blob& blob);
    /// The readAsBinaryString method.
    /// [`FileReader.readAsBinaryString`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsBinaryString)
    jsbind::Undefined readAsBinaryString(const Blob& blob);
    /// The readAsText method.
    /// [`FileReader.readAsText`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsText)
    jsbind::Undefined readAsText(const Blob& blob);
    /// The readAsText method.
    /// [`FileReader.readAsText`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsText)
    jsbind::Undefined readAsText(const Blob& blob, const jsbind::String& encoding);
    /// The readAsDataURL method.
    /// [`FileReader.readAsDataURL`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readAsDataURL)
    jsbind::Undefined readAsDataURL(const Blob& blob);
    /// The abort method.
    /// [`FileReader.abort`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/abort)
    jsbind::Undefined abort();
    /// Getter of the `readyState` attribute.
    /// [`FileReader.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/readyState)
    [[nodiscard]] unsigned short readyState() const;
    /// Getter of the `result` attribute.
    /// [`FileReader.result`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/result)
    [[nodiscard]] jsbind::Any result() const;
    /// Getter of the `error` attribute.
    /// [`FileReader.error`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/error)
    [[nodiscard]] DOMException error() const;
    /// Getter of the `onloadstart` attribute.
    /// [`FileReader.onloadstart`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadstart)
    [[nodiscard]] jsbind::Any onloadstart() const;
    /// Setter of the `onloadstart` attribute.
    /// [`FileReader.onloadstart`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadstart)
    void onloadstart(const jsbind::Any& value);
    /// Getter of the `onprogress` attribute.
    /// [`FileReader.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onprogress)
    [[nodiscard]] jsbind::Any onprogress() const;
    /// Setter of the `onprogress` attribute.
    /// [`FileReader.onprogress`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onprogress)
    void onprogress(const jsbind::Any& value);
    /// Getter of the `onload` attribute.
    /// [`FileReader.onload`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onload)
    [[nodiscard]] jsbind::Any onload() const;
    /// Setter of the `onload` attribute.
    /// [`FileReader.onload`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onload)
    void onload(const jsbind::Any& value);
    /// Getter of the `onabort` attribute.
    /// [`FileReader.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`FileReader.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onabort)
    void onabort(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`FileReader.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`FileReader.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `onloadend` attribute.
    /// [`FileReader.onloadend`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadend)
    [[nodiscard]] jsbind::Any onloadend() const;
    /// Setter of the `onloadend` attribute.
    /// [`FileReader.onloadend`](https://developer.mozilla.org/en-US/docs/Web/API/FileReader/onloadend)
    void onloadend(const jsbind::Any& value);
};

