


    template< typename category_right_name >
     struct convert<>
      {
       public:
         typedef ::color::_internal::trait<category_left_name>    category_left_trait_type;
         typedef ::color::_internal::trait<category_right_name>   category_right_trait_type;

         typedef typename category_left_trait_type::index_type          index_type;

         typedef typename category_left_trait_type::container_trait_type     container_left_trait_type;
         typedef typename category_right_trait_type::container_trait_type    container_right_trait_type;

         typedef typename category_left_trait_type::component_type  component_left_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            model_left_type        & left
           ,model_right_type const& right
          )
          {
            left.template set<0>( color:get::red<float>(    right )  );
            left.template set<1>( color:get::green<int>(    right )  );
            left.template set<2>( color:get::blue<double>(  right )  );
          }
       };