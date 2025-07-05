#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;


class FileReaderSync : public emlite::Val {
    explicit FileReaderSync(Handle h) noexcept;

public:
    explicit FileReaderSync(const emlite::Val &val) noexcept;
    static FileReaderSync take_ownership(Handle h) noexcept;

    FileReaderSync clone() const noexcept;
    FileReaderSync();
    jsbind::ArrayBuffer readAsArrayBuffer(const Blob& blob);
    jsbind::DOMString readAsBinaryString(const Blob& blob);
    jsbind::DOMString readAsText(const Blob& blob);
    jsbind::DOMString readAsText(const Blob& blob, const jsbind::DOMString& encoding);
    jsbind::DOMString readAsDataURL(const Blob& blob);
};

