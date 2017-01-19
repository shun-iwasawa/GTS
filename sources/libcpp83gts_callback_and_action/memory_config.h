#ifndef memory_config_h
#define memory_config_h

#include <cstdio>
#include <string>
#include <vector>
#include "ptbl_path_max.h"
#include "ptbl_returncode.h"

class memory_config {
public:
	memory_config()
	:str_on_("ON")
	,str_off_("OFF")

	,str_color_black_(
		  "black")
	,str_color_not_black_(
		  "not black")
	
	,str_config_dir_path_(
	    "config_dir_path")
		,str_config_dir_legacy2016_(
		    "config_dir")
	,str_config_open_file_name_(
	    "config_open_file_name")
		,str_config_open_file_name_legacy2016_(
		    "config_load_file")
	,str_config_save_file_name_(
	    "config_save_file_name")
		,str_config_save_file_name_legacy2016_(
		    "config_save_as_file")

	,str_scan_filter_trace_sw_(
	    "scan_filter_trace_sw")
		,str_scan_filter_trace_sw_legacy2017_(
	       "filter_rgb_color_trace_sw")
		,str_scan_filter_trace_sw_legacy2016_(
		 "level_rgb_trace_save_sw")
	,str_scan_filter_erase_dot_noise_sw_(
	    "scan_filter_erase_dot_noise_sw")
		,str_scan_filter_erase_dot_noise_sw_legacy2017_(
		     "filter_rgb_erase_dot_noise_sw")
		,str_scan_filter_erase_dot_noise_sw_legacy2016_(
		    "color_trace_erase_1dot")

	,str_scan_save_dir_path_(
	    "scan_save_dir_path")
		,str_scan_save_dir_path_legacy2017_(
		   "level_save_dir_path")
		,str_scan_save_dir_path_legacy2016_(
			"level_dir")
	,str_scan_save_file_head_(
	    "scan_save_file_head")
		,str_scan_save_file_head_legacy2017_(
		   "level_save_file_head")
		,str_scan_save_file_head_legacy2016_(
			"level_file")
	,str_scan_save_number_format_(
	    "scan_save_number_format")
	,str_scan_save_image_format_(
	    "scan_save_image_format")
		,str_scan_save_image_format_legacy2017_(
		   "level_save_image_format")
		,str_scan_save_image_format_legacy2016_(
		   "level_image_file_format")

	,str_scan_num_start_(
	    "scan_num_start")
		,str_scan_num_start_legacy2016_(
		   "level_num_start")
	,str_scan_num_end_(
	    "scan_num_end")
		,str_scan_num_end_legacy2016_(
		   "level_num_end")
	,str_scan_num_continue_type_(
	    "scan_num_continue_type")
		,str_scan_num_continue_type_legacy2016_(
		   "level_num_continue_type")
	,str_scan_num_endless_direction_(
	    "scan_num_endless_direction")
		,str_scan_num_endless_direction_legacy2016_(
		   "level_num_endless_direction")

	,str_trace_open_dir_path_(
	    "trace_open_dir_path")
		,str_trace_open_dir_path_legacy2016_(
		"level_rgb_scan_dir")
	,str_trace_open_file_head_(
	    "trace_open_file_head")
		,str_trace_open_file_head_legacy2016_(
		    "level_open_file_head")
	,str_trace_open_number_format_(
	    "trace_open_number_format")
	,str_trace_open_image_format_(
	    "trace_open_image_format")
		,str_trace_open_image_format_legacy2016_(
		    "level_open_image_format")

	,str_trace_filter_trace_sw_(
	    "trace_filter_trace_sw")
	,str_trace_filter_erase_dot_noise_sw_(
	    "trace_filter_erase_dot_noise_sw")

	,str_trace_save_dir_path_(
	    "trace_save_dir_path")
	,str_trace_save_file_head_(
	    "trace_save_file_head")
	,str_trace_save_number_format_(
	    "trace_save_number_format")
	,str_trace_save_image_format_(
	    "trace_save_image_format")

	,str_area_select_(
	    "area_select")
	,str_area_x_pos_(
	    "area_x_pos")
	,str_area_y_pos_(
	    "area_y_pos")
	,str_area_aspect_ratio_select_(
	    "area_aspect_ratio_select")
	,str_area_x_size_(
	    "area_x_size")
	,str_area_y_size_(
	    "area_y_size")
	,str_area_x_pixel_(
	    "area_x_pixel")
	,str_area_y_pixel_(
	    "area_y_pixel")
	,str_area_resolution_dpi_(
	    "area_resolution_dpi")
	,str_rotate_per_90_(
	    "rotate_per_90")
	,str_scanner_type_(
	    "scanner_type")
	,str_scanner_x_max_(
	    "scanner_x_max")
	,str_scanner_y_max_(
	    "scanner_y_max")

	,str_pixel_type_(
	    "pixel_type")
	,str_bw_threshold_(
	    "bw_threshold")
	,str_grayscale_brightness_(
	    "grayscale_brightness")
	,str_grayscale_contrast_(
	    "grayscale_contrast")
	,str_grayscale_gamma_(
	    "grayscale_gamma")
	,str_rgb_brightness_(
	    "rgb_brightness")
	,str_rgb_contrast_(
	    "rgb_contrast")
	,str_rgb_gamma_(
	    "rgb_gamma")

	,str_color_trace_real_time_(
	    "color_trace_real_time")
	,str_file_number_frame_(
			"frame")
	,str_file_number_selected_(
			"selected")

	,str_trace_batch_dir_(
	    "trace_batch_dir")
	,str_trace_batch_list_(
	    "batch")

	,str_color_trace_01_chk_(
	    "color_trace_01_chk")
	,str_color_trace_01_src_hh_min_(
	    "color_trace_01_src_hue_min")
	,str_color_trace_01_src_hh_max_(
	    "color_trace_01_src_hue_max")
	,str_color_trace_01_src_aa_min_(
	    "color_trace_01_src_sat_min")
	,str_color_trace_01_src_aa_max_(
	    "color_trace_01_src_sat_max")
	,str_color_trace_01_src_bb_min_(
	    "color_trace_01_src_val_min")
	,str_color_trace_01_src_bb_max_(
	    "color_trace_01_src_val_max")
	,str_color_trace_01_tgt_rgb_(
	    "color_trace_01_tgt_rgb")
	,str_color_trace_01_tgt_color_(
	    "color_trace_01_tgt_color")

	,str_color_trace_02_chk_(
	    "color_trace_02_chk")
	,str_color_trace_02_src_hh_min_(
	    "color_trace_02_src_hue_min")
	,str_color_trace_02_src_hh_max_(
	    "color_trace_02_src_hue_max")
	,str_color_trace_02_src_aa_min_(
	    "color_trace_02_src_sat_min")
	,str_color_trace_02_src_aa_max_(
	    "color_trace_02_src_sat_max")
	,str_color_trace_02_src_bb_min_(
	    "color_trace_02_src_val_min")
	,str_color_trace_02_src_bb_max_(
	    "color_trace_02_src_val_max")
	,str_color_trace_02_tgt_rgb_(
	    "color_trace_02_tgt_rgb")
	,str_color_trace_02_tgt_color_(
	    "color_trace_02_tgt_color")

	,str_color_trace_03_chk_(
	    "color_trace_03_chk")
	,str_color_trace_03_src_hh_min_(
	    "color_trace_03_src_hue_min")
	,str_color_trace_03_src_hh_max_(
	    "color_trace_03_src_hue_max")
	,str_color_trace_03_src_aa_min_(
	    "color_trace_03_src_sat_min")
	,str_color_trace_03_src_aa_max_(
	    "color_trace_03_src_sat_max")
	,str_color_trace_03_src_bb_min_(
	    "color_trace_03_src_val_min")
	,str_color_trace_03_src_bb_max_(
	    "color_trace_03_src_val_max")
	,str_color_trace_03_tgt_rgb_(
	    "color_trace_03_tgt_rgb")
	,str_color_trace_03_tgt_color_(
	    "color_trace_03_tgt_color")

	,str_color_trace_04_chk_(
	    "color_trace_04_chk")
	,str_color_trace_04_src_hh_min_(
	    "color_trace_04_src_hue_min")
	,str_color_trace_04_src_hh_max_(
	    "color_trace_04_src_hue_max")
	,str_color_trace_04_src_aa_min_(
	    "color_trace_04_src_sat_min")
	,str_color_trace_04_src_aa_max_(
	    "color_trace_04_src_sat_max")
	,str_color_trace_04_src_bb_min_(
	    "color_trace_04_src_val_min")
	,str_color_trace_04_src_bb_max_(
	    "color_trace_04_src_val_max")
	,str_color_trace_04_tgt_rgb_(
	    "color_trace_04_tgt_rgb")
	,str_color_trace_04_tgt_color_(
	    "color_trace_04_tgt_color")

	,str_color_trace_05_chk_(
	    "color_trace_05_chk")
	,str_color_trace_05_src_hh_min_(
	    "color_trace_05_src_hue_min")
	,str_color_trace_05_src_hh_max_(
	    "color_trace_05_src_hue_max")
	,str_color_trace_05_src_aa_min_(
	    "color_trace_05_src_sat_min")
	,str_color_trace_05_src_aa_max_(
	    "color_trace_05_src_sat_max")
	,str_color_trace_05_src_bb_min_(
	    "color_trace_05_src_val_min")
	,str_color_trace_05_src_bb_max_(
	    "color_trace_05_src_val_max")
	,str_color_trace_05_tgt_rgb_(
	    "color_trace_05_tgt_rgb")
	,str_color_trace_05_tgt_color_(
	    "color_trace_05_tgt_color")

	,str_color_trace_06_chk_(
	    "color_trace_06_chk")
	,str_color_trace_06_src_hh_min_(
	    "color_trace_06_src_hue_min")
	,str_color_trace_06_src_hh_max_(
	    "color_trace_06_src_hue_max")
	,str_color_trace_06_src_aa_min_(
	    "color_trace_06_src_sat_min")
	,str_color_trace_06_src_aa_max_(
	    "color_trace_06_src_sat_max")
	,str_color_trace_06_src_bb_min_(
	    "color_trace_06_src_val_min")
	,str_color_trace_06_src_bb_max_(
	    "color_trace_06_src_val_max")
	,str_color_trace_06_tgt_rgb_(
	    "color_trace_06_tgt_rgb")
	,str_color_trace_06_tgt_color_(
	    "color_trace_06_tgt_color")
	{
	}

	int save( const char *file_path );
	int load( const std::string& file_path,int load_trace_batch_sw=ON );

	std::string memory_of_path;

private:
	const char* str_on_;
	const char* str_off_;

	const char* str_color_black_;
	const char* str_color_not_black_;

	const char* str_config_dir_path_;
	const char* str_config_load_file_;
	const char* str_config_save_as_file_;

	const char* str_scan_filter_trace_sw_;
	const char* str_scan_filter_trace_sw_legacy2017_;
	const char* str_scan_filter_trace_sw_legacy2016_;
	const char* str_scan_filter_erase_dot_noise_sw_;
	const char* str_scan_filter_erase_dot_noise_sw_legacy2017_;
	const char* str_scan_filter_erase_dot_noise_sw_legacy2016_;

	const char* str_scan_save_dir_path_;
	const char* str_scan_save_dir_path_legacy2017_;
	const char* str_scan_save_dir_path_legacy2016_;
	const char* str_scan_save_file_head_;
	const char* str_scan_save_file_head_legacy2017_;
	const char* str_scan_save_file_head_legacy2016_;
	const char* str_scan_save_number_format_;
	const char* str_scan_save_image_format_;
	const char* str_scan_save_image_format_legacy2017_;
	const char* str_scan_save_image_format_legacy2016_;

	const char* str_scan_num_start_;
	const char* str_scan_num_start_legacy2016_;
	const char* str_scan_num_end_;
	const char* str_scan_num_end_legacy2016_;
	const char* str_scan_num_continue_type_;
	const char* str_scan_num_continue_type_legacy2016_;
	const char* str_scan_num_endless_direction_;
	const char* str_scan_num_endless_direction_legacy2016_;

	const char* str_trace_open_dir_path_;
	const char* str_trace_open_dir_path_legacy2016_;
	const char* str_trace_open_file_head_;
	const char* str_trace_open_file_head_legacy2016_;
	const char* str_trace_open_number_format_;
	const char* str_trace_open_image_format_;
	const char* str_trace_open_image_format_legacy2016_;

	const char* str_trace_filter_trace_sw_;
	const char* str_trace_filter_erase_dot_noise_sw_;

	const char* str_trace_save_dir_path_;
	const char* str_trace_save_file_head_;
	const char* str_trace_save_number_format_;
	const char* str_trace_save_image_format_;

	const char* str_area_select_;
	const char* str_area_x_pos_;
	const char* str_area_y_pos_;
	const char* str_area_aspect_ratio_select_;
	const char* str_area_x_size_;
	const char* str_area_y_size_;
	const char* str_area_x_pixel_;
	const char* str_area_y_pixel_;
	const char* str_area_resolution_dpi_;
	const char* str_rotate_per_90_;
	const char* str_scanner_type_;
	const char* str_scanner_x_max_;
	const char* str_scanner_y_max_;

	const char* str_pixel_type_;
	const char* str_bw_threshold_;
	const char* str_grayscale_brightness_;
	const char* str_grayscale_contrast_;
	const char* str_grayscale_gamma_;
	const char* str_rgb_brightness_;
	const char* str_rgb_contrast_;
	const char* str_rgb_gamma_;

	const char* str_color_trace_real_time_;
	const char* str_file_number_frame_;
	const char* str_file_number_selected_;

	const char* str_trace_batch_dir_;
	const char* str_trace_batch_list_;

	const char* str_color_trace_01_chk_;
	const char* str_color_trace_01_src_hh_min_;
	const char* str_color_trace_01_src_hh_max_;
	const char* str_color_trace_01_src_aa_min_;
	const char* str_color_trace_01_src_aa_max_;
	const char* str_color_trace_01_src_bb_min_;
	const char* str_color_trace_01_src_bb_max_;
	const char* str_color_trace_01_tgt_rgb_;
	const char* str_color_trace_01_tgt_color_;

	const char* str_color_trace_02_chk_;
	const char* str_color_trace_02_src_hh_min_;
	const char* str_color_trace_02_src_hh_max_;
	const char* str_color_trace_02_src_aa_min_;
	const char* str_color_trace_02_src_aa_max_;
	const char* str_color_trace_02_src_bb_min_;
	const char* str_color_trace_02_src_bb_max_;
	const char* str_color_trace_02_tgt_rgb_;
	const char* str_color_trace_02_tgt_color_;

	const char* str_color_trace_03_chk_;
	const char* str_color_trace_03_src_hh_min_;
	const char* str_color_trace_03_src_hh_max_;
	const char* str_color_trace_03_src_aa_min_;
	const char* str_color_trace_03_src_aa_max_;
	const char* str_color_trace_03_src_bb_min_;
	const char* str_color_trace_03_src_bb_max_;
	const char* str_color_trace_03_tgt_rgb_;
	const char* str_color_trace_03_tgt_color_;

	const char* str_color_trace_04_chk_;
	const char* str_color_trace_04_src_hh_min_;
	const char* str_color_trace_04_src_hh_max_;
	const char* str_color_trace_04_src_aa_min_;
	const char* str_color_trace_04_src_aa_max_;
	const char* str_color_trace_04_src_bb_min_;
	const char* str_color_trace_04_src_bb_max_;
	const char* str_color_trace_04_tgt_rgb_;
	const char* str_color_trace_04_tgt_color_;

	const char* str_color_trace_05_chk_;
	const char* str_color_trace_05_src_hh_min_;
	const char* str_color_trace_05_src_hh_max_;
	const char* str_color_trace_05_src_aa_min_;
	const char* str_color_trace_05_src_aa_max_;
	const char* str_color_trace_05_src_bb_min_;
	const char* str_color_trace_05_src_bb_max_;
	const char* str_color_trace_05_tgt_rgb_;
	const char* str_color_trace_05_tgt_color_;

	const char* str_color_trace_06_chk_;
	const char* str_color_trace_06_src_hh_min_;
	const char* str_color_trace_06_src_hh_max_;
	const char* str_color_trace_06_src_aa_min_;
	const char* str_color_trace_06_src_aa_max_;
	const char* str_color_trace_06_src_bb_min_;
	const char* str_color_trace_06_src_bb_max_;
	const char* str_color_trace_06_tgt_rgb_;
	const char* str_color_trace_06_tgt_color_;

	//-------------------------------------

	void save_head_( std::ofstream& ofs );
	void save_config_( std::ofstream& ofs );
	void save_scan_and_save_( std::ofstream& ofs );
	void save_trace_files_( std::ofstream& ofs );
	void save_crop_area_and_rot90_( std::ofstream& ofs );
	void save_pixel_type_and_bright_( std::ofstream& ofs );
	void save_trace_parameters_( std::ofstream& ofs );
	void save_trace_batch_( std::ofstream& ofs );
	void save_number_( std::ofstream& ofs );

	//-------------------------------------

	void load_ifs_(
		std::ifstream& ifs
		,const int load_trace_batch_sw
		,bool& fnum_list_sw
		,bool& trace_batch_list_sw
		,bool& level_list_redisplay_sw
		,bool& level_num_continue_type_sw
	);
	bool load_config_( std::vector< std::string >& words );
	bool load_scan_and_save_( std::vector< std::string >& words );
	bool load_trace_files_( std::vector< std::string >& words );
	bool load_crop_area_and_rot90_( std::vector< std::string >& words );
	bool load_pixel_type_and_bright_(std::vector< std::string >& words);
	bool load_trace_parameters_( std::vector< std::string >& words );
	bool load_trace_batch_( std::vector< std::string >& words );
	bool load_number_( std::vector< std::string >& words );
};

#endif /* !memory_config_h */
