#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SpeechRecognitionResult;

/// Interface SpeechRecognitionResultList
/// [`SpeechRecognitionResultList`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResultList)
class SpeechRecognitionResultList : public emlite::Val {
    explicit SpeechRecognitionResultList(Handle h) noexcept;
public:
    explicit SpeechRecognitionResultList(const emlite::Val &val) noexcept;
    static SpeechRecognitionResultList take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechRecognitionResultList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SpeechRecognitionResultList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResultList/length)
    /// [`SpeechRecognitionResultList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResultList/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`SpeechRecognitionResultList.item`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResultList/item)
    SpeechRecognitionResult item(unsigned long index);
};

} // namespace webbind