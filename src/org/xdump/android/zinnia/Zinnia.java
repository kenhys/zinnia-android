package org.xdump.android.zinnia;

public class Zinnia {
	static {
		System.loadLibrary("zinniajni");
	}

	public native long  zinnia_character_new();
	public native void        zinnia_character_destroy(long character);
	public native void        zinnia_character_set_value(long character, String str);
	public native void        zinnia_character_set_value2(long character, String str, long length);
	public native String zinnia_character_value(long character);
	public native void        zinnia_character_set_width(long character, long width);
	public native void        zinnia_character_set_height(long character, long height);
	public native long      zinnia_character_width(long character);
	public native long      zinnia_character_height(long character);
	public native void        zinnia_character_clear(long stroke);
	public native int         zinnia_character_add(long character, long id, int x, int y);
	public native long      zinnia_character_strokes_size(long character);
	public native long      zinnia_character_stroke_size(long character, long id);
	public native int         zinnia_character_x(long character, long id, long i);
	public native int         zinnia_character_y(long character, long id, long i);
	public native int         zinnia_character_parse(long character, String str);
	public native int         zinnia_character_parse2(long character, String str, long length);
	public native int         zinnia_character_to_string(long character, String buf, long length);
	public native String zinnia_character_strerror(long character);


	public native String zinnia_result_value(long result, long i);
	public native float       zinnia_result_score(long result, long i);
	public native long      zinnia_result_size(long result);
	public native void        zinnia_result_destroy(long result);

	public native long zinnia_recognizer_new();
	public native void                zinnia_recognizer_destroy(long recognizer);
	public native int                 zinnia_recognizer_open(long recognizer, String filename);
	public native int                 zinnia_recognizer_open_from_ptr(long recognizer,
			String ptr, long size);
	public native int                 zinnia_recognizer_close(long recognizer);
	public native long              zinnia_recognizer_size(long recognizer);
	public native String zinnia_recognizer_value(long recognizer, long i);
	public native String         zinnia_recognizer_strerror(long recognizer);
	public native long zinnia_recognizer_classify(long recognizer,
			String character,
			long nbest);

	public native long zinnia_trainer_new();
	public native void             zinnia_trainer_destroy(long trainer);
	public native int              zinnia_trainer_add(long trainer, long character);
	public native void             zinnia_trainer_clear(long trainer);
	public native int              zinnia_trainer_train(long trainer, String filename);
	public native String zinnia_trainer_strerror(long trainer);
	public native int              zinnia_trainer_convert_model(String txt_model,
			String binary_model,
			double compression_threshold);
	public native int              zinnia_trainer_make_header(String txt_model,
			String header_file,
			String name,
			double compression_threshold);
}
