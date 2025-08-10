#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SpeechRecognitionPhrase;

/// Interface SpeechRecognitionPhraseList
/// [`SpeechRecognitionPhraseList`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhraseList)
class SpeechRecognitionPhraseList : public emlite::Val {
    explicit SpeechRecognitionPhraseList(Handle h) noexcept;
public:
    explicit SpeechRecognitionPhraseList(const emlite::Val &val) noexcept;
    static SpeechRecognitionPhraseList take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechRecognitionPhraseList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SpeechRecognitionPhraseList(..)` constructor, creating a new SpeechRecognitionPhraseList instance
    SpeechRecognitionPhraseList(const jsbind::TypedArray<SpeechRecognitionPhrase>& phrases);
    /// [`SpeechRecognitionPhraseList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhraseList/length)
    /// [`SpeechRecognitionPhraseList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhraseList/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`SpeechRecognitionPhraseList.item`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhraseList/item)
    SpeechRecognitionPhrase item(unsigned long index);
    /// The addItem method.
    /// [`SpeechRecognitionPhraseList.addItem`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhraseList/addItem)
    jsbind::Undefined addItem(const SpeechRecognitionPhrase& item);
    /// The removeItem method.
    /// [`SpeechRecognitionPhraseList.removeItem`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhraseList/removeItem)
    jsbind::Undefined removeItem(unsigned long index);
};

} // namespace webbind